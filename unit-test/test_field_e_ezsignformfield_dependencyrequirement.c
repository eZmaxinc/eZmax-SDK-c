#ifndef field_e_ezsignformfield_dependencyrequirement_TEST
#define field_e_ezsignformfield_dependencyrequirement_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsignformfield_dependencyrequirement_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsignformfield_dependencyrequirement.h"
field_e_ezsignformfield_dependencyrequirement_t* instantiate_field_e_ezsignformfield_dependencyrequirement(int include_optional);



field_e_ezsignformfield_dependencyrequirement_t* instantiate_field_e_ezsignformfield_dependencyrequirement(int include_optional) {
  field_e_ezsignformfield_dependencyrequirement_t* field_e_ezsignformfield_dependencyrequirement = NULL;
  if (include_optional) {
    field_e_ezsignformfield_dependencyrequirement = field_e_ezsignformfield_dependencyrequirement_create(
    );
  } else {
    field_e_ezsignformfield_dependencyrequirement = field_e_ezsignformfield_dependencyrequirement_create(
    );
  }

  return field_e_ezsignformfield_dependencyrequirement;
}


#ifdef field_e_ezsignformfield_dependencyrequirement_MAIN

void test_field_e_ezsignformfield_dependencyrequirement(int include_optional) {
    field_e_ezsignformfield_dependencyrequirement_t* field_e_ezsignformfield_dependencyrequirement_1 = instantiate_field_e_ezsignformfield_dependencyrequirement(include_optional);

	cJSON* jsonfield_e_ezsignformfield_dependencyrequirement_1 = field_e_ezsignformfield_dependencyrequirement_convertToJSON(field_e_ezsignformfield_dependencyrequirement_1);
	printf("field_e_ezsignformfield_dependencyrequirement :\n%s\n", cJSON_Print(jsonfield_e_ezsignformfield_dependencyrequirement_1));
	field_e_ezsignformfield_dependencyrequirement_t* field_e_ezsignformfield_dependencyrequirement_2 = field_e_ezsignformfield_dependencyrequirement_parseFromJSON(jsonfield_e_ezsignformfield_dependencyrequirement_1);
	cJSON* jsonfield_e_ezsignformfield_dependencyrequirement_2 = field_e_ezsignformfield_dependencyrequirement_convertToJSON(field_e_ezsignformfield_dependencyrequirement_2);
	printf("repeating field_e_ezsignformfield_dependencyrequirement:\n%s\n", cJSON_Print(jsonfield_e_ezsignformfield_dependencyrequirement_2));
}

int main() {
  test_field_e_ezsignformfield_dependencyrequirement(1);
  test_field_e_ezsignformfield_dependencyrequirement(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsignformfield_dependencyrequirement_MAIN
#endif // field_e_ezsignformfield_dependencyrequirement_TEST
