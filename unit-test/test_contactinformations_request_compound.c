#ifndef contactinformations_request_compound_TEST
#define contactinformations_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contactinformations_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contactinformations_request_compound.h"
contactinformations_request_compound_t* instantiate_contactinformations_request_compound(int include_optional);



contactinformations_request_compound_t* instantiate_contactinformations_request_compound(int include_optional) {
  contactinformations_request_compound_t* contactinformations_request_compound = NULL;
  if (include_optional) {
    contactinformations_request_compound = contactinformations_request_compound_create(
      56,
      56,
      56,
      56,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    contactinformations_request_compound = contactinformations_request_compound_create(
      56,
      56,
      56,
      56,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return contactinformations_request_compound;
}


#ifdef contactinformations_request_compound_MAIN

void test_contactinformations_request_compound(int include_optional) {
    contactinformations_request_compound_t* contactinformations_request_compound_1 = instantiate_contactinformations_request_compound(include_optional);

	cJSON* jsoncontactinformations_request_compound_1 = contactinformations_request_compound_convertToJSON(contactinformations_request_compound_1);
	printf("contactinformations_request_compound :\n%s\n", cJSON_Print(jsoncontactinformations_request_compound_1));
	contactinformations_request_compound_t* contactinformations_request_compound_2 = contactinformations_request_compound_parseFromJSON(jsoncontactinformations_request_compound_1);
	cJSON* jsoncontactinformations_request_compound_2 = contactinformations_request_compound_convertToJSON(contactinformations_request_compound_2);
	printf("repeating contactinformations_request_compound:\n%s\n", cJSON_Print(jsoncontactinformations_request_compound_2));
}

int main() {
  test_contactinformations_request_compound(1);
  test_contactinformations_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // contactinformations_request_compound_MAIN
#endif // contactinformations_request_compound_TEST
