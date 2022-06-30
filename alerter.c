#include "alerter.h"
#define PRODUCT_ENVIRONMENT 1
#define TEST_ENVIRNOMENT 0

int networkAlertStub(float celcius) {
    printf("ALERT: Temperature is %.1f celcius.\n", celcius);
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    if(celcius <=MAX_STUB_VALUE)
        return MAX_STUB_VALUE;
    else
        return THERSHOLD_STUB_VALUE;
}

int networkAlert(float celcius)
{
    return 0;
}
int alertInCelcius(float farenheit) {
    float celcius = (farenheit - 32) * 5 / 9;
    int returnCode = networkAlertStub(celcius);
 #ifdef  TEST_ENVIRNOMENT   
    if (returnCode != MAX_STUB_VALUE) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 1;
    }
    return alertFailureCount;
#endif
 #ifdef PRODUCT_ENVIRONMENT
    returnCode = networkAlert(celcius);
 #endif    
}

void testalertInCelcius()
{
    assert(alertInCelcius(FRENHEIT_VALUE1)==alertFailureCount);
    assert(alertInCelcius(FRENHEIT_VALUE2)==ALERT_FAILCOUNT1);
    assert(alertInCelcius(FRENHEIT_VALUE3)==ALERT_FAILCOUNT2);
    printf("%d alerts failed.\n", alertFailureCount);
    printf("All is well (maybe!)\n");
}

int main() {
    testalertInCelcius();
    return 0;
}
