#include "alerter.h"

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

int alertInCelcius(float farenheit) {
    float celcius = (farenheit - 32) * 5 / 9;
    int returnCode = networkAlertStub(celcius);
    if (returnCode != MAX_STUB_VALUE) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 1;
    }
    return alertFailureCount;
}

void testalertInCelcius()
{
    //alertInCelcius(FRENHEIT_VALUE1);
    //assert(alertFailureCount == FALSE);
    assert(alertInCelcius(400.5)==1);
    assert(alertInCelcius(500.5)==1);
    printf("%d alerts failed.\n", alertFailureCount);
    printf("All is well (maybe!)\n");
}

int main() {
    testalertInCelcius();
    return 0;
}
