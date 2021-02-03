#ifndef contactinformations_request_TEST
#define contactinformations_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contactinformations_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contactinformations_request.h"
contactinformations_request_t* instantiate_contactinformations_request(int include_optional);



contactinformations_request_t* instantiate_contactinformations_request(int include_optional) {
  contactinformations_request_t* contactinformations_request = NULL;
  if (include_optional) {
    contactinformations_request = contactinformations_request_create(
      56,
      56,
      56,
      56
    );
  } else {
    contactinformations_request = contactinformations_request_create(
      56,
      56,
      56,
      56
    );
  }

  return contactinformations_request;
}


#ifdef contactinformations_request_MAIN

void test_contactinformations_request(int include_optional) {
    contactinformations_request_t* contactinformations_request_1 = instantiate_contactinformations_request(include_optional);

	cJSON* jsoncontactinformations_request_1 = contactinformations_request_convertToJSON(contactinformations_request_1);
	printf("contactinformations_request :\n%s\n", cJSON_Print(jsoncontactinformations_request_1));
	contactinformations_request_t* contactinformations_request_2 = contactinformations_request_parseFromJSON(jsoncontactinformations_request_1);
	cJSON* jsoncontactinformations_request_2 = contactinformations_request_convertToJSON(contactinformations_request_2);
	printf("repeating contactinformations_request:\n%s\n", cJSON_Print(jsoncontactinformations_request_2));
}

int main() {
  test_contactinformations_request(1);
  test_contactinformations_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // contactinformations_request_MAIN
#endif // contactinformations_request_TEST
