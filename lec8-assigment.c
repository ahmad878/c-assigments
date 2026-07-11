#include <stdio.h>

typedef enum
{
    OFF = 0,
    ON = 1
} DeviceState;

typedef union
{
    float temperature;
    int error_code;
} SensorData;

typedef struct
{
    int id;
    DeviceState state;
    SensorData data;
} Device;

typedef struct
{
    unsigned char power : 1;
    unsigned char wifi : 1;
    unsigned char error : 1;
    unsigned char reserved : 5;
} HardwareRegister;

int main()
{
    Device MySensor;

    MySensor.id = 404;
    MySensor.state = ON;
    MySensor.data.temperature = 26.5;
    printf("---Device rebooting---\n");

    printf("Device id: %d\n", MySensor.id);
    printf("Device state: %d\n", MySensor.state);
    printf("Temperature: %.1f\n", MySensor.data.temperature);

    HardwareRegister reg;
    printf("---Hardware rebooting\n");

    reg.power = 1;
    reg.wifi = 1;
    reg.error = 0;

    printf("Power: %d\n", reg.power);
    printf("Wifi: %d\n", reg.wifi);
    printf("Error: %d\n", reg.error);

    printf("Register Size: %d\n", (int)sizeof(reg));

    return 0;
}
