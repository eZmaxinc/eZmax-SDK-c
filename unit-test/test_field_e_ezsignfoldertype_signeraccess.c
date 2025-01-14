#ifndef field_e_ezsignfoldertype_signeraccess_TEST
#define field_e_ezsignfoldertype_signeraccess_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsignfoldertype_signeraccess_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsignfoldertype_signeraccess.h"
field_e_ezsignfoldertype_signeraccess_t* instantiate_field_e_ezsignfoldertype_signeraccess(int include_optional);



field_e_ezsignfoldertype_signeraccess_t* instantiate_field_e_ezsignfoldertype_signeraccess(int include_optional) {
  field_e_ezsignfoldertype_signeraccess_t* field_e_ezsignfoldertype_signeraccess = NULL;
  if (include_optional) {
    field_e_ezsignfoldertype_signeraccess = field_e_ezsignfoldertype_signeraccess_create(
    );
  } else {
    field_e_ezsignfoldertype_signeraccess = field_e_ezsignfoldertype_signeraccess_create(
    );
  }

  return field_e_ezsignfoldertype_signeraccess;
}


#ifdef field_e_ezsignfoldertype_signeraccess_MAIN

void test_field_e_ezsignfoldertype_signeraccess(int include_optional) {
    field_e_ezsignfoldertype_signeraccess_t* field_e_ezsignfoldertype_signeraccess_1 = instantiate_field_e_ezsignfoldertype_signeraccess(include_optional);

	cJSON* jsonfield_e_ezsignfoldertype_signeraccess_1 = field_e_ezsignfoldertype_signeraccess_convertToJSON(field_e_ezsignfoldertype_signeraccess_1);
	printf("field_e_ezsignfoldertype_signeraccess :\n%s\n", cJSON_Print(jsonfield_e_ezsignfoldertype_signeraccess_1));
	field_e_ezsignfoldertype_signeraccess_t* field_e_ezsignfoldertype_signeraccess_2 = field_e_ezsignfoldertype_signeraccess_parseFromJSON(jsonfield_e_ezsignfoldertype_signeraccess_1);
	cJSON* jsonfield_e_ezsignfoldertype_signeraccess_2 = field_e_ezsignfoldertype_signeraccess_convertToJSON(field_e_ezsignfoldertype_signeraccess_2);
	printf("repeating field_e_ezsignfoldertype_signeraccess:\n%s\n", cJSON_Print(jsonfield_e_ezsignfoldertype_signeraccess_2));
}

int main() {
  test_field_e_ezsignfoldertype_signeraccess(1);
  test_field_e_ezsignfoldertype_signeraccess(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsignfoldertype_signeraccess_MAIN
#endif // field_e_ezsignfoldertype_signeraccess_TEST
