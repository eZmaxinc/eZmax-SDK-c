#ifndef ezsignpage_response_compound_TEST
#define ezsignpage_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignpage_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignpage_response_compound.h"
ezsignpage_response_compound_t* instantiate_ezsignpage_response_compound(int include_optional);



ezsignpage_response_compound_t* instantiate_ezsignpage_response_compound(int include_optional) {
  ezsignpage_response_compound_t* ezsignpage_response_compound = NULL;
  if (include_optional) {
    ezsignpage_response_compound = ezsignpage_response_compound_create(
      64,
      850,
      1100,
      612,
      792,
      1,
      "0"
    );
  } else {
    ezsignpage_response_compound = ezsignpage_response_compound_create(
      64,
      850,
      1100,
      612,
      792,
      1,
      "0"
    );
  }

  return ezsignpage_response_compound;
}


#ifdef ezsignpage_response_compound_MAIN

void test_ezsignpage_response_compound(int include_optional) {
    ezsignpage_response_compound_t* ezsignpage_response_compound_1 = instantiate_ezsignpage_response_compound(include_optional);

	cJSON* jsonezsignpage_response_compound_1 = ezsignpage_response_compound_convertToJSON(ezsignpage_response_compound_1);
	printf("ezsignpage_response_compound :\n%s\n", cJSON_Print(jsonezsignpage_response_compound_1));
	ezsignpage_response_compound_t* ezsignpage_response_compound_2 = ezsignpage_response_compound_parseFromJSON(jsonezsignpage_response_compound_1);
	cJSON* jsonezsignpage_response_compound_2 = ezsignpage_response_compound_convertToJSON(ezsignpage_response_compound_2);
	printf("repeating ezsignpage_response_compound:\n%s\n", cJSON_Print(jsonezsignpage_response_compound_2));
}

int main() {
  test_ezsignpage_response_compound(1);
  test_ezsignpage_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignpage_response_compound_MAIN
#endif // ezsignpage_response_compound_TEST
