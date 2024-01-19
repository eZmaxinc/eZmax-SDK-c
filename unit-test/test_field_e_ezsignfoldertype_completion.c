#ifndef field_e_ezsignfoldertype_completion_TEST
#define field_e_ezsignfoldertype_completion_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsignfoldertype_completion_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsignfoldertype_completion.h"
field_e_ezsignfoldertype_completion_t* instantiate_field_e_ezsignfoldertype_completion(int include_optional);



field_e_ezsignfoldertype_completion_t* instantiate_field_e_ezsignfoldertype_completion(int include_optional) {
  field_e_ezsignfoldertype_completion_t* field_e_ezsignfoldertype_completion = NULL;
  if (include_optional) {
    field_e_ezsignfoldertype_completion = field_e_ezsignfoldertype_completion_create(
    );
  } else {
    field_e_ezsignfoldertype_completion = field_e_ezsignfoldertype_completion_create(
    );
  }

  return field_e_ezsignfoldertype_completion;
}


#ifdef field_e_ezsignfoldertype_completion_MAIN

void test_field_e_ezsignfoldertype_completion(int include_optional) {
    field_e_ezsignfoldertype_completion_t* field_e_ezsignfoldertype_completion_1 = instantiate_field_e_ezsignfoldertype_completion(include_optional);

	cJSON* jsonfield_e_ezsignfoldertype_completion_1 = field_e_ezsignfoldertype_completion_convertToJSON(field_e_ezsignfoldertype_completion_1);
	printf("field_e_ezsignfoldertype_completion :\n%s\n", cJSON_Print(jsonfield_e_ezsignfoldertype_completion_1));
	field_e_ezsignfoldertype_completion_t* field_e_ezsignfoldertype_completion_2 = field_e_ezsignfoldertype_completion_parseFromJSON(jsonfield_e_ezsignfoldertype_completion_1);
	cJSON* jsonfield_e_ezsignfoldertype_completion_2 = field_e_ezsignfoldertype_completion_convertToJSON(field_e_ezsignfoldertype_completion_2);
	printf("repeating field_e_ezsignfoldertype_completion:\n%s\n", cJSON_Print(jsonfield_e_ezsignfoldertype_completion_2));
}

int main() {
  test_field_e_ezsignfoldertype_completion(1);
  test_field_e_ezsignfoldertype_completion(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsignfoldertype_completion_MAIN
#endif // field_e_ezsignfoldertype_completion_TEST
