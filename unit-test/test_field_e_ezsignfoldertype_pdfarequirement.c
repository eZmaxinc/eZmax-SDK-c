#ifndef field_e_ezsignfoldertype_pdfarequirement_TEST
#define field_e_ezsignfoldertype_pdfarequirement_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsignfoldertype_pdfarequirement_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsignfoldertype_pdfarequirement.h"
field_e_ezsignfoldertype_pdfarequirement_t* instantiate_field_e_ezsignfoldertype_pdfarequirement(int include_optional);



field_e_ezsignfoldertype_pdfarequirement_t* instantiate_field_e_ezsignfoldertype_pdfarequirement(int include_optional) {
  field_e_ezsignfoldertype_pdfarequirement_t* field_e_ezsignfoldertype_pdfarequirement = NULL;
  if (include_optional) {
    field_e_ezsignfoldertype_pdfarequirement = field_e_ezsignfoldertype_pdfarequirement_create(
    );
  } else {
    field_e_ezsignfoldertype_pdfarequirement = field_e_ezsignfoldertype_pdfarequirement_create(
    );
  }

  return field_e_ezsignfoldertype_pdfarequirement;
}


#ifdef field_e_ezsignfoldertype_pdfarequirement_MAIN

void test_field_e_ezsignfoldertype_pdfarequirement(int include_optional) {
    field_e_ezsignfoldertype_pdfarequirement_t* field_e_ezsignfoldertype_pdfarequirement_1 = instantiate_field_e_ezsignfoldertype_pdfarequirement(include_optional);

	cJSON* jsonfield_e_ezsignfoldertype_pdfarequirement_1 = field_e_ezsignfoldertype_pdfarequirement_convertToJSON(field_e_ezsignfoldertype_pdfarequirement_1);
	printf("field_e_ezsignfoldertype_pdfarequirement :\n%s\n", cJSON_Print(jsonfield_e_ezsignfoldertype_pdfarequirement_1));
	field_e_ezsignfoldertype_pdfarequirement_t* field_e_ezsignfoldertype_pdfarequirement_2 = field_e_ezsignfoldertype_pdfarequirement_parseFromJSON(jsonfield_e_ezsignfoldertype_pdfarequirement_1);
	cJSON* jsonfield_e_ezsignfoldertype_pdfarequirement_2 = field_e_ezsignfoldertype_pdfarequirement_convertToJSON(field_e_ezsignfoldertype_pdfarequirement_2);
	printf("repeating field_e_ezsignfoldertype_pdfarequirement:\n%s\n", cJSON_Print(jsonfield_e_ezsignfoldertype_pdfarequirement_2));
}

int main() {
  test_field_e_ezsignfoldertype_pdfarequirement(1);
  test_field_e_ezsignfoldertype_pdfarequirement(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsignfoldertype_pdfarequirement_MAIN
#endif // field_e_ezsignfoldertype_pdfarequirement_TEST
