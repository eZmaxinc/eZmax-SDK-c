#ifndef domain_response_compound_TEST
#define domain_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_response_compound.h"
domain_response_compound_t* instantiate_domain_response_compound(int include_optional);

#include "test_common_audit.c"


domain_response_compound_t* instantiate_domain_response_compound(int include_optional) {
  domain_response_compound_t* domain_response_compound = NULL;
  if (include_optional) {
    domain_response_compound = domain_response_compound_create(
      96,
      "ezsign.ca",
      1,
      1,
      1,
       // false, not to have infinite recursion
      instantiate_common_audit(0),
      list_createList()
    );
  } else {
    domain_response_compound = domain_response_compound_create(
      96,
      "ezsign.ca",
      1,
      1,
      1,
      NULL,
      list_createList()
    );
  }

  return domain_response_compound;
}


#ifdef domain_response_compound_MAIN

void test_domain_response_compound(int include_optional) {
    domain_response_compound_t* domain_response_compound_1 = instantiate_domain_response_compound(include_optional);

	cJSON* jsondomain_response_compound_1 = domain_response_compound_convertToJSON(domain_response_compound_1);
	printf("domain_response_compound :\n%s\n", cJSON_Print(jsondomain_response_compound_1));
	domain_response_compound_t* domain_response_compound_2 = domain_response_compound_parseFromJSON(jsondomain_response_compound_1);
	cJSON* jsondomain_response_compound_2 = domain_response_compound_convertToJSON(domain_response_compound_2);
	printf("repeating domain_response_compound:\n%s\n", cJSON_Print(jsondomain_response_compound_2));
}

int main() {
  test_domain_response_compound(1);
  test_domain_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_response_compound_MAIN
#endif // domain_response_compound_TEST
