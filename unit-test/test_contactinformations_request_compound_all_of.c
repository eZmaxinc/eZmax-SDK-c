#ifndef contactinformations_request_compound_all_of_TEST
#define contactinformations_request_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contactinformations_request_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contactinformations_request_compound_all_of.h"
contactinformations_request_compound_all_of_t* instantiate_contactinformations_request_compound_all_of(int include_optional);



contactinformations_request_compound_all_of_t* instantiate_contactinformations_request_compound_all_of(int include_optional) {
  contactinformations_request_compound_all_of_t* contactinformations_request_compound_all_of = NULL;
  if (include_optional) {
    contactinformations_request_compound_all_of = contactinformations_request_compound_all_of_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    contactinformations_request_compound_all_of = contactinformations_request_compound_all_of_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return contactinformations_request_compound_all_of;
}


#ifdef contactinformations_request_compound_all_of_MAIN

void test_contactinformations_request_compound_all_of(int include_optional) {
    contactinformations_request_compound_all_of_t* contactinformations_request_compound_all_of_1 = instantiate_contactinformations_request_compound_all_of(include_optional);

	cJSON* jsoncontactinformations_request_compound_all_of_1 = contactinformations_request_compound_all_of_convertToJSON(contactinformations_request_compound_all_of_1);
	printf("contactinformations_request_compound_all_of :\n%s\n", cJSON_Print(jsoncontactinformations_request_compound_all_of_1));
	contactinformations_request_compound_all_of_t* contactinformations_request_compound_all_of_2 = contactinformations_request_compound_all_of_parseFromJSON(jsoncontactinformations_request_compound_all_of_1);
	cJSON* jsoncontactinformations_request_compound_all_of_2 = contactinformations_request_compound_all_of_convertToJSON(contactinformations_request_compound_all_of_2);
	printf("repeating contactinformations_request_compound_all_of:\n%s\n", cJSON_Print(jsoncontactinformations_request_compound_all_of_2));
}

int main() {
  test_contactinformations_request_compound_all_of(1);
  test_contactinformations_request_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // contactinformations_request_compound_all_of_MAIN
#endif // contactinformations_request_compound_all_of_TEST
