#ifndef domain_request_compound_TEST
#define domain_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_request_compound.h"
domain_request_compound_t* instantiate_domain_request_compound(int include_optional);



domain_request_compound_t* instantiate_domain_request_compound(int include_optional) {
  domain_request_compound_t* domain_request_compound = NULL;
  if (include_optional) {
    domain_request_compound = domain_request_compound_create(
      96,
      "ezsign.ca"
    );
  } else {
    domain_request_compound = domain_request_compound_create(
      96,
      "ezsign.ca"
    );
  }

  return domain_request_compound;
}


#ifdef domain_request_compound_MAIN

void test_domain_request_compound(int include_optional) {
    domain_request_compound_t* domain_request_compound_1 = instantiate_domain_request_compound(include_optional);

	cJSON* jsondomain_request_compound_1 = domain_request_compound_convertToJSON(domain_request_compound_1);
	printf("domain_request_compound :\n%s\n", cJSON_Print(jsondomain_request_compound_1));
	domain_request_compound_t* domain_request_compound_2 = domain_request_compound_parseFromJSON(jsondomain_request_compound_1);
	cJSON* jsondomain_request_compound_2 = domain_request_compound_convertToJSON(domain_request_compound_2);
	printf("repeating domain_request_compound:\n%s\n", cJSON_Print(jsondomain_request_compound_2));
}

int main() {
  test_domain_request_compound(1);
  test_domain_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_request_compound_MAIN
#endif // domain_request_compound_TEST
