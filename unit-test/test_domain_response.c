#ifndef domain_response_TEST
#define domain_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_response.h"
domain_response_t* instantiate_domain_response(int include_optional);

#include "test_common_audit.c"


domain_response_t* instantiate_domain_response(int include_optional) {
  domain_response_t* domain_response = NULL;
  if (include_optional) {
    domain_response = domain_response_create(
      96,
      "ezsign.ca",
      1,
      1,
      1,
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    domain_response = domain_response_create(
      96,
      "ezsign.ca",
      1,
      1,
      1,
      NULL
    );
  }

  return domain_response;
}


#ifdef domain_response_MAIN

void test_domain_response(int include_optional) {
    domain_response_t* domain_response_1 = instantiate_domain_response(include_optional);

	cJSON* jsondomain_response_1 = domain_response_convertToJSON(domain_response_1);
	printf("domain_response :\n%s\n", cJSON_Print(jsondomain_response_1));
	domain_response_t* domain_response_2 = domain_response_parseFromJSON(jsondomain_response_1);
	cJSON* jsondomain_response_2 = domain_response_convertToJSON(domain_response_2);
	printf("repeating domain_response:\n%s\n", cJSON_Print(jsondomain_response_2));
}

int main() {
  test_domain_response(1);
  test_domain_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_response_MAIN
#endif // domain_response_TEST
