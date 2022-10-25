#ifndef ezmaxinvoicing_response_TEST
#define ezmaxinvoicing_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicing_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicing_response.h"
ezmaxinvoicing_response_t* instantiate_ezmaxinvoicing_response(int include_optional);

#include "test_common_audit.c"


ezmaxinvoicing_response_t* instantiate_ezmaxinvoicing_response(int include_optional) {
  ezmaxinvoicing_response_t* ezmaxinvoicing_response = NULL;
  if (include_optional) {
    ezmaxinvoicing_response = ezmaxinvoicing_response_create(
      28,
      28,
      28,
      28,
      "eZsign (Pro)",
      "2022-01",
      28,
      ezmax_api_definition__full_ezmaxinvoicing_response__"Cheque",
      "1.00",
      1,
      "1.00",
      true,
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    ezmaxinvoicing_response = ezmaxinvoicing_response_create(
      28,
      28,
      28,
      28,
      "eZsign (Pro)",
      "2022-01",
      28,
      ezmax_api_definition__full_ezmaxinvoicing_response__"Cheque",
      "1.00",
      1,
      "1.00",
      true,
      NULL
    );
  }

  return ezmaxinvoicing_response;
}


#ifdef ezmaxinvoicing_response_MAIN

void test_ezmaxinvoicing_response(int include_optional) {
    ezmaxinvoicing_response_t* ezmaxinvoicing_response_1 = instantiate_ezmaxinvoicing_response(include_optional);

	cJSON* jsonezmaxinvoicing_response_1 = ezmaxinvoicing_response_convertToJSON(ezmaxinvoicing_response_1);
	printf("ezmaxinvoicing_response :\n%s\n", cJSON_Print(jsonezmaxinvoicing_response_1));
	ezmaxinvoicing_response_t* ezmaxinvoicing_response_2 = ezmaxinvoicing_response_parseFromJSON(jsonezmaxinvoicing_response_1);
	cJSON* jsonezmaxinvoicing_response_2 = ezmaxinvoicing_response_convertToJSON(ezmaxinvoicing_response_2);
	printf("repeating ezmaxinvoicing_response:\n%s\n", cJSON_Print(jsonezmaxinvoicing_response_2));
}

int main() {
  test_ezmaxinvoicing_response(1);
  test_ezmaxinvoicing_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicing_response_MAIN
#endif // ezmaxinvoicing_response_TEST
