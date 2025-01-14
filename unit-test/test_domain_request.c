#ifndef domain_request_TEST
#define domain_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_request.h"
domain_request_t* instantiate_domain_request(int include_optional);



domain_request_t* instantiate_domain_request(int include_optional) {
  domain_request_t* domain_request = NULL;
  if (include_optional) {
    domain_request = domain_request_create(
      96,
      "ezsign.ca"
    );
  } else {
    domain_request = domain_request_create(
      96,
      "ezsign.ca"
    );
  }

  return domain_request;
}


#ifdef domain_request_MAIN

void test_domain_request(int include_optional) {
    domain_request_t* domain_request_1 = instantiate_domain_request(include_optional);

	cJSON* jsondomain_request_1 = domain_request_convertToJSON(domain_request_1);
	printf("domain_request :\n%s\n", cJSON_Print(jsondomain_request_1));
	domain_request_t* domain_request_2 = domain_request_parseFromJSON(jsondomain_request_1);
	cJSON* jsondomain_request_2 = domain_request_convertToJSON(domain_request_2);
	printf("repeating domain_request:\n%s\n", cJSON_Print(jsondomain_request_2));
}

int main() {
  test_domain_request(1);
  test_domain_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_request_MAIN
#endif // domain_request_TEST
