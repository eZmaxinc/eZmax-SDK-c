#ifndef field_e_ezsignformfieldgroup_signerrequirement_TEST
#define field_e_ezsignformfieldgroup_signerrequirement_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsignformfieldgroup_signerrequirement_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsignformfieldgroup_signerrequirement.h"
field_e_ezsignformfieldgroup_signerrequirement_t* instantiate_field_e_ezsignformfieldgroup_signerrequirement(int include_optional);



field_e_ezsignformfieldgroup_signerrequirement_t* instantiate_field_e_ezsignformfieldgroup_signerrequirement(int include_optional) {
  field_e_ezsignformfieldgroup_signerrequirement_t* field_e_ezsignformfieldgroup_signerrequirement = NULL;
  if (include_optional) {
    field_e_ezsignformfieldgroup_signerrequirement = field_e_ezsignformfieldgroup_signerrequirement_create(
    );
  } else {
    field_e_ezsignformfieldgroup_signerrequirement = field_e_ezsignformfieldgroup_signerrequirement_create(
    );
  }

  return field_e_ezsignformfieldgroup_signerrequirement;
}


#ifdef field_e_ezsignformfieldgroup_signerrequirement_MAIN

void test_field_e_ezsignformfieldgroup_signerrequirement(int include_optional) {
    field_e_ezsignformfieldgroup_signerrequirement_t* field_e_ezsignformfieldgroup_signerrequirement_1 = instantiate_field_e_ezsignformfieldgroup_signerrequirement(include_optional);

	cJSON* jsonfield_e_ezsignformfieldgroup_signerrequirement_1 = field_e_ezsignformfieldgroup_signerrequirement_convertToJSON(field_e_ezsignformfieldgroup_signerrequirement_1);
	printf("field_e_ezsignformfieldgroup_signerrequirement :\n%s\n", cJSON_Print(jsonfield_e_ezsignformfieldgroup_signerrequirement_1));
	field_e_ezsignformfieldgroup_signerrequirement_t* field_e_ezsignformfieldgroup_signerrequirement_2 = field_e_ezsignformfieldgroup_signerrequirement_parseFromJSON(jsonfield_e_ezsignformfieldgroup_signerrequirement_1);
	cJSON* jsonfield_e_ezsignformfieldgroup_signerrequirement_2 = field_e_ezsignformfieldgroup_signerrequirement_convertToJSON(field_e_ezsignformfieldgroup_signerrequirement_2);
	printf("repeating field_e_ezsignformfieldgroup_signerrequirement:\n%s\n", cJSON_Print(jsonfield_e_ezsignformfieldgroup_signerrequirement_2));
}

int main() {
  test_field_e_ezsignformfieldgroup_signerrequirement(1);
  test_field_e_ezsignformfieldgroup_signerrequirement(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsignformfieldgroup_signerrequirement_MAIN
#endif // field_e_ezsignformfieldgroup_signerrequirement_TEST
