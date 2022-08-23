#ifndef field_e_ezsignfoldertype_disposal_TEST
#define field_e_ezsignfoldertype_disposal_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsignfoldertype_disposal_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsignfoldertype_disposal.h"
field_e_ezsignfoldertype_disposal_t* instantiate_field_e_ezsignfoldertype_disposal(int include_optional);



field_e_ezsignfoldertype_disposal_t* instantiate_field_e_ezsignfoldertype_disposal(int include_optional) {
  field_e_ezsignfoldertype_disposal_t* field_e_ezsignfoldertype_disposal = NULL;
  if (include_optional) {
    field_e_ezsignfoldertype_disposal = field_e_ezsignfoldertype_disposal_create(
    );
  } else {
    field_e_ezsignfoldertype_disposal = field_e_ezsignfoldertype_disposal_create(
    );
  }

  return field_e_ezsignfoldertype_disposal;
}


#ifdef field_e_ezsignfoldertype_disposal_MAIN

void test_field_e_ezsignfoldertype_disposal(int include_optional) {
    field_e_ezsignfoldertype_disposal_t* field_e_ezsignfoldertype_disposal_1 = instantiate_field_e_ezsignfoldertype_disposal(include_optional);

	cJSON* jsonfield_e_ezsignfoldertype_disposal_1 = field_e_ezsignfoldertype_disposal_convertToJSON(field_e_ezsignfoldertype_disposal_1);
	printf("field_e_ezsignfoldertype_disposal :\n%s\n", cJSON_Print(jsonfield_e_ezsignfoldertype_disposal_1));
	field_e_ezsignfoldertype_disposal_t* field_e_ezsignfoldertype_disposal_2 = field_e_ezsignfoldertype_disposal_parseFromJSON(jsonfield_e_ezsignfoldertype_disposal_1);
	cJSON* jsonfield_e_ezsignfoldertype_disposal_2 = field_e_ezsignfoldertype_disposal_convertToJSON(field_e_ezsignfoldertype_disposal_2);
	printf("repeating field_e_ezsignfoldertype_disposal:\n%s\n", cJSON_Print(jsonfield_e_ezsignfoldertype_disposal_2));
}

int main() {
  test_field_e_ezsignfoldertype_disposal(1);
  test_field_e_ezsignfoldertype_disposal(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsignfoldertype_disposal_MAIN
#endif // field_e_ezsignfoldertype_disposal_TEST
