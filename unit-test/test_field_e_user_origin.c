#ifndef field_e_user_origin_TEST
#define field_e_user_origin_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_user_origin_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_user_origin.h"
field_e_user_origin_t* instantiate_field_e_user_origin(int include_optional);



field_e_user_origin_t* instantiate_field_e_user_origin(int include_optional) {
  field_e_user_origin_t* field_e_user_origin = NULL;
  if (include_optional) {
    field_e_user_origin = field_e_user_origin_create(
    );
  } else {
    field_e_user_origin = field_e_user_origin_create(
    );
  }

  return field_e_user_origin;
}


#ifdef field_e_user_origin_MAIN

void test_field_e_user_origin(int include_optional) {
    field_e_user_origin_t* field_e_user_origin_1 = instantiate_field_e_user_origin(include_optional);

	cJSON* jsonfield_e_user_origin_1 = field_e_user_origin_convertToJSON(field_e_user_origin_1);
	printf("field_e_user_origin :\n%s\n", cJSON_Print(jsonfield_e_user_origin_1));
	field_e_user_origin_t* field_e_user_origin_2 = field_e_user_origin_parseFromJSON(jsonfield_e_user_origin_1);
	cJSON* jsonfield_e_user_origin_2 = field_e_user_origin_convertToJSON(field_e_user_origin_2);
	printf("repeating field_e_user_origin:\n%s\n", cJSON_Print(jsonfield_e_user_origin_2));
}

int main() {
  test_field_e_user_origin(1);
  test_field_e_user_origin(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_user_origin_MAIN
#endif // field_e_user_origin_TEST
