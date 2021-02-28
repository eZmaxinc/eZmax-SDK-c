#ifndef field_e_user_type_sspr_TEST
#define field_e_user_type_sspr_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_user_type_sspr_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_user_type_sspr.h"
field_e_user_type_sspr_t* instantiate_field_e_user_type_sspr(int include_optional);



field_e_user_type_sspr_t* instantiate_field_e_user_type_sspr(int include_optional) {
  field_e_user_type_sspr_t* field_e_user_type_sspr = NULL;
  if (include_optional) {
    field_e_user_type_sspr = field_e_user_type_sspr_create(
    );
  } else {
    field_e_user_type_sspr = field_e_user_type_sspr_create(
    );
  }

  return field_e_user_type_sspr;
}


#ifdef field_e_user_type_sspr_MAIN

void test_field_e_user_type_sspr(int include_optional) {
    field_e_user_type_sspr_t* field_e_user_type_sspr_1 = instantiate_field_e_user_type_sspr(include_optional);

	cJSON* jsonfield_e_user_type_sspr_1 = field_e_user_type_sspr_convertToJSON(field_e_user_type_sspr_1);
	printf("field_e_user_type_sspr :\n%s\n", cJSON_Print(jsonfield_e_user_type_sspr_1));
	field_e_user_type_sspr_t* field_e_user_type_sspr_2 = field_e_user_type_sspr_parseFromJSON(jsonfield_e_user_type_sspr_1);
	cJSON* jsonfield_e_user_type_sspr_2 = field_e_user_type_sspr_convertToJSON(field_e_user_type_sspr_2);
	printf("repeating field_e_user_type_sspr:\n%s\n", cJSON_Print(jsonfield_e_user_type_sspr_2));
}

int main() {
  test_field_e_user_type_sspr(1);
  test_field_e_user_type_sspr(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_user_type_sspr_MAIN
#endif // field_e_user_type_sspr_TEST
