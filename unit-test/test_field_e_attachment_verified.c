#ifndef field_e_attachment_verified_TEST
#define field_e_attachment_verified_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_attachment_verified_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_attachment_verified.h"
field_e_attachment_verified_t* instantiate_field_e_attachment_verified(int include_optional);



field_e_attachment_verified_t* instantiate_field_e_attachment_verified(int include_optional) {
  field_e_attachment_verified_t* field_e_attachment_verified = NULL;
  if (include_optional) {
    field_e_attachment_verified = field_e_attachment_verified_create(
    );
  } else {
    field_e_attachment_verified = field_e_attachment_verified_create(
    );
  }

  return field_e_attachment_verified;
}


#ifdef field_e_attachment_verified_MAIN

void test_field_e_attachment_verified(int include_optional) {
    field_e_attachment_verified_t* field_e_attachment_verified_1 = instantiate_field_e_attachment_verified(include_optional);

	cJSON* jsonfield_e_attachment_verified_1 = field_e_attachment_verified_convertToJSON(field_e_attachment_verified_1);
	printf("field_e_attachment_verified :\n%s\n", cJSON_Print(jsonfield_e_attachment_verified_1));
	field_e_attachment_verified_t* field_e_attachment_verified_2 = field_e_attachment_verified_parseFromJSON(jsonfield_e_attachment_verified_1);
	cJSON* jsonfield_e_attachment_verified_2 = field_e_attachment_verified_convertToJSON(field_e_attachment_verified_2);
	printf("repeating field_e_attachment_verified:\n%s\n", cJSON_Print(jsonfield_e_attachment_verified_2));
}

int main() {
  test_field_e_attachment_verified(1);
  test_field_e_attachment_verified(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_attachment_verified_MAIN
#endif // field_e_attachment_verified_TEST
