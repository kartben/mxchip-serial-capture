#include "Sensor.h"

#include "SystemVersion.h"
#include "SystemTickCounter.h"
#include "telemetry.h"

static char buffInfo[128];

static DevI2C *ext_i2c;
static LSM6DSLSensor *acc_gyro;

void getDevKitGyroscopeValue(int *x, int *y, int *z)
{
    int axes[3];
    acc_gyro->getGAxes(axes);
    *x = axes[0];
    *y = axes[1];
    *z = axes[2];
}

void getDevKitAcceleratorValue(int *x, int *y, int *z)
{
    int axes[3];
    acc_gyro->getXAxes(axes);
    *x = axes[0];
    *y = axes[1];
    *z = axes[2];
}

void showMotionAccelSensor()
{
  int aX, aY, aZ;
  int gX, gY, gZ;

  getDevKitAcceleratorValue(&aX, &aY, &aZ);
  getDevKitGyroscopeValue(&gX, &gY, &gZ);

  snprintf(buffInfo, sizeof(buffInfo), "[%d,%d,%d,%d,%d,%d]", aX, aY, aZ, gX, gY, gZ);
  Serial.println(buffInfo);
}

void setup()
{
  Screen.init();

  if ((ext_i2c = new DevI2C(D14, D15)) == NULL)
  {
    Serial.println("Failed to initialize I2C.");
    for (;;)
      ;
  }

  if ((acc_gyro = new LSM6DSLSensor(*ext_i2c, D4, D5)) == NULL)
  {
    Serial.println("Failed to initialize gyroscope and accelerator sensor.");
    for (;;)
      ;
  }
  acc_gyro->init(NULL);
  acc_gyro->enableAccelerator();
  acc_gyro->enableGyroscope();

  Screen.clean();
  Screen.print(0, "Capturing data", 1);
}

void loop()
{
  showMotionAccelSensor();
}
