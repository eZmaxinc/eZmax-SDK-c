#ifndef domain_create_object_v1_request_TEST
#define domain_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_create_object_v1_request.h"
domain_create_object_v1_request_t* instantiate_domain_create_object_v1_request(int include_optional);



domain_create_object_v1_request_t* instantiate_domain_create_object_v1_request(int include_optional) {
  domain_create_object_v1_request_t* domain_create_object_v1_request = NULL;
  if (include_optional) {
    domain_create_object_v1_request = domain_create_object_v1_request_create(
      list_createList()
    );
  } else {
    domain_create_object_v1_request = domain_create_object_v1_request_create(
      list_createList()
    );
  }

  return domain_create_object_v1_request;
}


#ifdef domain_create_object_v1_request_MAIN

void test_domain_create_object_v1_request(int include_optional) {
    domain_create_object_v1_request_t* domain_create_object_v1_request_1 = instantiate_domain_create_object_v1_request(include_optional);

	cJSON* jsondomain_create_object_v1_request_1 = domain_create_object_v1_request_convertToJSON(domain_create_object_v1_request_1);
	printf("domain_create_object_v1_request :\n%s\n", cJSON_Print(jsondomain_create_object_v1_request_1));
	domain_create_object_v1_request_t* domain_create_object_v1_request_2 = domain_create_object_v1_request_parseFromJSON(jsondomain_create_object_v1_request_1);
	cJSON* jsondomain_create_object_v1_request_2 = domain_create_object_v1_request_convertToJSON(domain_create_object_v1_request_2);
	printf("repeating domain_create_object_v1_request:\n%s\n", cJSON_Print(jsondomain_create_object_v1_request_2));
}

int main() {
  test_domain_create_object_v1_request(1);
  test_domain_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_create_object_v1_request_MAIN
#endif // domain_create_object_v1_request_TEST
