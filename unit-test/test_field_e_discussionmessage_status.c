#ifndef field_e_discussionmessage_status_TEST
#define field_e_discussionmessage_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_discussionmessage_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_discussionmessage_status.h"
field_e_discussionmessage_status_t* instantiate_field_e_discussionmessage_status(int include_optional);



field_e_discussionmessage_status_t* instantiate_field_e_discussionmessage_status(int include_optional) {
  field_e_discussionmessage_status_t* field_e_discussionmessage_status = NULL;
  if (include_optional) {
    field_e_discussionmessage_status = field_e_discussionmessage_status_create(
    );
  } else {
    field_e_discussionmessage_status = field_e_discussionmessage_status_create(
    );
  }

  return field_e_discussionmessage_status;
}


#ifdef field_e_discussionmessage_status_MAIN

void test_field_e_discussionmessage_status(int include_optional) {
    field_e_discussionmessage_status_t* field_e_discussionmessage_status_1 = instantiate_field_e_discussionmessage_status(include_optional);

	cJSON* jsonfield_e_discussionmessage_status_1 = field_e_discussionmessage_status_convertToJSON(field_e_discussionmessage_status_1);
	printf("field_e_discussionmessage_status :\n%s\n", cJSON_Print(jsonfield_e_discussionmessage_status_1));
	field_e_discussionmessage_status_t* field_e_discussionmessage_status_2 = field_e_discussionmessage_status_parseFromJSON(jsonfield_e_discussionmessage_status_1);
	cJSON* jsonfield_e_discussionmessage_status_2 = field_e_discussionmessage_status_convertToJSON(field_e_discussionmessage_status_2);
	printf("repeating field_e_discussionmessage_status:\n%s\n", cJSON_Print(jsonfield_e_discussionmessage_status_2));
}

int main() {
  test_field_e_discussionmessage_status(1);
  test_field_e_discussionmessage_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_discussionmessage_status_MAIN
#endif // field_e_discussionmessage_status_TEST
