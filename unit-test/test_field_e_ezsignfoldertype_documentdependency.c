#ifndef field_e_ezsignfoldertype_documentdependency_TEST
#define field_e_ezsignfoldertype_documentdependency_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsignfoldertype_documentdependency_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsignfoldertype_documentdependency.h"
field_e_ezsignfoldertype_documentdependency_t* instantiate_field_e_ezsignfoldertype_documentdependency(int include_optional);



field_e_ezsignfoldertype_documentdependency_t* instantiate_field_e_ezsignfoldertype_documentdependency(int include_optional) {
  field_e_ezsignfoldertype_documentdependency_t* field_e_ezsignfoldertype_documentdependency = NULL;
  if (include_optional) {
    field_e_ezsignfoldertype_documentdependency = field_e_ezsignfoldertype_documentdependency_create(
    );
  } else {
    field_e_ezsignfoldertype_documentdependency = field_e_ezsignfoldertype_documentdependency_create(
    );
  }

  return field_e_ezsignfoldertype_documentdependency;
}


#ifdef field_e_ezsignfoldertype_documentdependency_MAIN

void test_field_e_ezsignfoldertype_documentdependency(int include_optional) {
    field_e_ezsignfoldertype_documentdependency_t* field_e_ezsignfoldertype_documentdependency_1 = instantiate_field_e_ezsignfoldertype_documentdependency(include_optional);

	cJSON* jsonfield_e_ezsignfoldertype_documentdependency_1 = field_e_ezsignfoldertype_documentdependency_convertToJSON(field_e_ezsignfoldertype_documentdependency_1);
	printf("field_e_ezsignfoldertype_documentdependency :\n%s\n", cJSON_Print(jsonfield_e_ezsignfoldertype_documentdependency_1));
	field_e_ezsignfoldertype_documentdependency_t* field_e_ezsignfoldertype_documentdependency_2 = field_e_ezsignfoldertype_documentdependency_parseFromJSON(jsonfield_e_ezsignfoldertype_documentdependency_1);
	cJSON* jsonfield_e_ezsignfoldertype_documentdependency_2 = field_e_ezsignfoldertype_documentdependency_convertToJSON(field_e_ezsignfoldertype_documentdependency_2);
	printf("repeating field_e_ezsignfoldertype_documentdependency:\n%s\n", cJSON_Print(jsonfield_e_ezsignfoldertype_documentdependency_2));
}

int main() {
  test_field_e_ezsignfoldertype_documentdependency(1);
  test_field_e_ezsignfoldertype_documentdependency(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsignfoldertype_documentdependency_MAIN
#endif // field_e_ezsignfoldertype_documentdependency_TEST
