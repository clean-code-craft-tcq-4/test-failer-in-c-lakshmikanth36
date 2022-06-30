#include <stdio.h>
#include <assert.h>
#define THERSHOLD_STUB_VALUE 500
#define MAX_STUB_VALUE 200
#define FRENHEIT_VALUE1 303.6
#define FRENHEIT_VALUE2 400.5
#define FRENHEIT_VALUE3 500.5
#define ALERT_FAILCOUNT1 1
#define ALERT_FAILCOUNT2 2
int alertFailureCount = 0;
int networkAlertStub(float celcius);
int alertInCelcius(float farenheit);
void testalertInCelcius();
