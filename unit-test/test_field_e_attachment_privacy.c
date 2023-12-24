#ifndef field_e_attachment_privacy_TEST
#define field_e_attachment_privacy_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_attachment_privacy_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_attachment_privacy.h"
field_e_attachment_privacy_t* instantiate_field_e_attachment_privacy(int include_optional);



field_e_attachment_privacy_t* instantiate_field_e_attachment_privacy(int include_optional) {
  field_e_attachment_privacy_t* field_e_attachment_privacy = NULL;
  if (include_optional) {
    field_e_attachment_privacy = field_e_attachment_privacy_create(
    );
  } else {
    field_e_attachment_privacy = field_e_attachment_privacy_create(
    );
  }

  return field_e_attachment_privacy;
}


#ifdef field_e_attachment_privacy_MAIN

void test_field_e_attachment_privacy(int include_optional) {
    field_e_attachment_privacy_t* field_e_attachment_privacy_1 = instantiate_field_e_attachment_privacy(include_optional);

	cJSON* jsonfield_e_attachment_privacy_1 = field_e_attachment_privacy_convertToJSON(field_e_attachment_privacy_1);
	printf("field_e_attachment_privacy :\n%s\n", cJSON_Print(jsonfield_e_attachment_privacy_1));
	field_e_attachment_privacy_t* field_e_attachment_privacy_2 = field_e_attachment_privacy_parseFromJSON(jsonfield_e_attachment_privacy_1);
	cJSON* jsonfield_e_attachment_privacy_2 = field_e_attachment_privacy_convertToJSON(field_e_attachment_privacy_2);
	printf("repeating field_e_attachment_privacy:\n%s\n", cJSON_Print(jsonfield_e_attachment_privacy_2));
}

int main() {
  test_field_e_attachment_privacy(1);
  test_field_e_attachment_privacy(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_attachment_privacy_MAIN
#endif // field_e_attachment_privacy_TEST
