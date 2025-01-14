#ifndef domain_list_element_TEST
#define domain_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_list_element.h"
domain_list_element_t* instantiate_domain_list_element(int include_optional);



domain_list_element_t* instantiate_domain_list_element(int include_optional) {
  domain_list_element_t* domain_list_element = NULL;
  if (include_optional) {
    domain_list_element = domain_list_element_create(
      96,
      "ezsign.ca"
    );
  } else {
    domain_list_element = domain_list_element_create(
      96,
      "ezsign.ca"
    );
  }

  return domain_list_element;
}


#ifdef domain_list_element_MAIN

void test_domain_list_element(int include_optional) {
    domain_list_element_t* domain_list_element_1 = instantiate_domain_list_element(include_optional);

	cJSON* jsondomain_list_element_1 = domain_list_element_convertToJSON(domain_list_element_1);
	printf("domain_list_element :\n%s\n", cJSON_Print(jsondomain_list_element_1));
	domain_list_element_t* domain_list_element_2 = domain_list_element_parseFromJSON(jsondomain_list_element_1);
	cJSON* jsondomain_list_element_2 = domain_list_element_convertToJSON(domain_list_element_2);
	printf("repeating domain_list_element:\n%s\n", cJSON_Print(jsondomain_list_element_2));
}

int main() {
  test_domain_list_element(1);
  test_domain_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_list_element_MAIN
#endif // domain_list_element_TEST
