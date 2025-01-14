#ifndef field_e_ezsigntemplatepublic_limittype_TEST
#define field_e_ezsigntemplatepublic_limittype_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsigntemplatepublic_limittype_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsigntemplatepublic_limittype.h"
field_e_ezsigntemplatepublic_limittype_t* instantiate_field_e_ezsigntemplatepublic_limittype(int include_optional);



field_e_ezsigntemplatepublic_limittype_t* instantiate_field_e_ezsigntemplatepublic_limittype(int include_optional) {
  field_e_ezsigntemplatepublic_limittype_t* field_e_ezsigntemplatepublic_limittype = NULL;
  if (include_optional) {
    field_e_ezsigntemplatepublic_limittype = field_e_ezsigntemplatepublic_limittype_create(
    );
  } else {
    field_e_ezsigntemplatepublic_limittype = field_e_ezsigntemplatepublic_limittype_create(
    );
  }

  return field_e_ezsigntemplatepublic_limittype;
}


#ifdef field_e_ezsigntemplatepublic_limittype_MAIN

void test_field_e_ezsigntemplatepublic_limittype(int include_optional) {
    field_e_ezsigntemplatepublic_limittype_t* field_e_ezsigntemplatepublic_limittype_1 = instantiate_field_e_ezsigntemplatepublic_limittype(include_optional);

	cJSON* jsonfield_e_ezsigntemplatepublic_limittype_1 = field_e_ezsigntemplatepublic_limittype_convertToJSON(field_e_ezsigntemplatepublic_limittype_1);
	printf("field_e_ezsigntemplatepublic_limittype :\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplatepublic_limittype_1));
	field_e_ezsigntemplatepublic_limittype_t* field_e_ezsigntemplatepublic_limittype_2 = field_e_ezsigntemplatepublic_limittype_parseFromJSON(jsonfield_e_ezsigntemplatepublic_limittype_1);
	cJSON* jsonfield_e_ezsigntemplatepublic_limittype_2 = field_e_ezsigntemplatepublic_limittype_convertToJSON(field_e_ezsigntemplatepublic_limittype_2);
	printf("repeating field_e_ezsigntemplatepublic_limittype:\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplatepublic_limittype_2));
}

int main() {
  test_field_e_ezsigntemplatepublic_limittype(1);
  test_field_e_ezsigntemplatepublic_limittype(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsigntemplatepublic_limittype_MAIN
#endif // field_e_ezsigntemplatepublic_limittype_TEST
