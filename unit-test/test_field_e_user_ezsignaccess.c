#ifndef field_e_user_ezsignaccess_TEST
#define field_e_user_ezsignaccess_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_user_ezsignaccess_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_user_ezsignaccess.h"
field_e_user_ezsignaccess_t* instantiate_field_e_user_ezsignaccess(int include_optional);



field_e_user_ezsignaccess_t* instantiate_field_e_user_ezsignaccess(int include_optional) {
  field_e_user_ezsignaccess_t* field_e_user_ezsignaccess = NULL;
  if (include_optional) {
    field_e_user_ezsignaccess = field_e_user_ezsignaccess_create(
    );
  } else {
    field_e_user_ezsignaccess = field_e_user_ezsignaccess_create(
    );
  }

  return field_e_user_ezsignaccess;
}


#ifdef field_e_user_ezsignaccess_MAIN

void test_field_e_user_ezsignaccess(int include_optional) {
    field_e_user_ezsignaccess_t* field_e_user_ezsignaccess_1 = instantiate_field_e_user_ezsignaccess(include_optional);

	cJSON* jsonfield_e_user_ezsignaccess_1 = field_e_user_ezsignaccess_convertToJSON(field_e_user_ezsignaccess_1);
	printf("field_e_user_ezsignaccess :\n%s\n", cJSON_Print(jsonfield_e_user_ezsignaccess_1));
	field_e_user_ezsignaccess_t* field_e_user_ezsignaccess_2 = field_e_user_ezsignaccess_parseFromJSON(jsonfield_e_user_ezsignaccess_1);
	cJSON* jsonfield_e_user_ezsignaccess_2 = field_e_user_ezsignaccess_convertToJSON(field_e_user_ezsignaccess_2);
	printf("repeating field_e_user_ezsignaccess:\n%s\n", cJSON_Print(jsonfield_e_user_ezsignaccess_2));
}

int main() {
  test_field_e_user_ezsignaccess(1);
  test_field_e_user_ezsignaccess(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_user_ezsignaccess_MAIN
#endif // field_e_user_ezsignaccess_TEST
