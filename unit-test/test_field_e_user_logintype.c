#ifndef field_e_user_logintype_TEST
#define field_e_user_logintype_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_user_logintype_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_user_logintype.h"
field_e_user_logintype_t* instantiate_field_e_user_logintype(int include_optional);



field_e_user_logintype_t* instantiate_field_e_user_logintype(int include_optional) {
  field_e_user_logintype_t* field_e_user_logintype = NULL;
  if (include_optional) {
    field_e_user_logintype = field_e_user_logintype_create(
    );
  } else {
    field_e_user_logintype = field_e_user_logintype_create(
    );
  }

  return field_e_user_logintype;
}


#ifdef field_e_user_logintype_MAIN

void test_field_e_user_logintype(int include_optional) {
    field_e_user_logintype_t* field_e_user_logintype_1 = instantiate_field_e_user_logintype(include_optional);

	cJSON* jsonfield_e_user_logintype_1 = field_e_user_logintype_convertToJSON(field_e_user_logintype_1);
	printf("field_e_user_logintype :\n%s\n", cJSON_Print(jsonfield_e_user_logintype_1));
	field_e_user_logintype_t* field_e_user_logintype_2 = field_e_user_logintype_parseFromJSON(jsonfield_e_user_logintype_1);
	cJSON* jsonfield_e_user_logintype_2 = field_e_user_logintype_convertToJSON(field_e_user_logintype_2);
	printf("repeating field_e_user_logintype:\n%s\n", cJSON_Print(jsonfield_e_user_logintype_2));
}

int main() {
  test_field_e_user_logintype(1);
  test_field_e_user_logintype(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_user_logintype_MAIN
#endif // field_e_user_logintype_TEST
