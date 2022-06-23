#include <stdio.h>
#include <assert.h>
#define THERSHOLD_STUB_VALUE 500
#define MAX_STUB_VALUE 200
#define FRENHEIT_VALUE1 400.5
#define FRENHEIT_VALUE2 303.6
#define TRUE 0
#define FALSE 1
int alertFailureCount = 0;
int networkAlertStub(float celcius);
void alertInCelcius(float farenheit);
void testalertInCelcius();
