#ifndef contactinformations_request_v2_TEST
#define contactinformations_request_v2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contactinformations_request_v2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contactinformations_request_v2.h"
contactinformations_request_v2_t* instantiate_contactinformations_request_v2(int include_optional);



contactinformations_request_v2_t* instantiate_contactinformations_request_v2(int include_optional) {
  contactinformations_request_v2_t* contactinformations_request_v2 = NULL;
  if (include_optional) {
    contactinformations_request_v2 = contactinformations_request_v2_create(
      ezmax_api_definition__full_contactinformations_request_v2__"BankAccount",
      56,
      56,
      56,
      56
    );
  } else {
    contactinformations_request_v2 = contactinformations_request_v2_create(
      ezmax_api_definition__full_contactinformations_request_v2__"BankAccount",
      56,
      56,
      56,
      56
    );
  }

  return contactinformations_request_v2;
}


#ifdef contactinformations_request_v2_MAIN

void test_contactinformations_request_v2(int include_optional) {
    contactinformations_request_v2_t* contactinformations_request_v2_1 = instantiate_contactinformations_request_v2(include_optional);

	cJSON* jsoncontactinformations_request_v2_1 = contactinformations_request_v2_convertToJSON(contactinformations_request_v2_1);
	printf("contactinformations_request_v2 :\n%s\n", cJSON_Print(jsoncontactinformations_request_v2_1));
	contactinformations_request_v2_t* contactinformations_request_v2_2 = contactinformations_request_v2_parseFromJSON(jsoncontactinformations_request_v2_1);
	cJSON* jsoncontactinformations_request_v2_2 = contactinformations_request_v2_convertToJSON(contactinformations_request_v2_2);
	printf("repeating contactinformations_request_v2:\n%s\n", cJSON_Print(jsoncontactinformations_request_v2_2));
}

int main() {
  test_contactinformations_request_v2(1);
  test_contactinformations_request_v2(0);

  printf("Hello world \n");
  return 0;
}

#endif // contactinformations_request_v2_MAIN
#endif // contactinformations_request_v2_TEST
