#ifndef field_e_ezsignfoldertype_pdfanoncompliantaction_TEST
#define field_e_ezsignfoldertype_pdfanoncompliantaction_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsignfoldertype_pdfanoncompliantaction_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsignfoldertype_pdfanoncompliantaction.h"
field_e_ezsignfoldertype_pdfanoncompliantaction_t* instantiate_field_e_ezsignfoldertype_pdfanoncompliantaction(int include_optional);



field_e_ezsignfoldertype_pdfanoncompliantaction_t* instantiate_field_e_ezsignfoldertype_pdfanoncompliantaction(int include_optional) {
  field_e_ezsignfoldertype_pdfanoncompliantaction_t* field_e_ezsignfoldertype_pdfanoncompliantaction = NULL;
  if (include_optional) {
    field_e_ezsignfoldertype_pdfanoncompliantaction = field_e_ezsignfoldertype_pdfanoncompliantaction_create(
    );
  } else {
    field_e_ezsignfoldertype_pdfanoncompliantaction = field_e_ezsignfoldertype_pdfanoncompliantaction_create(
    );
  }

  return field_e_ezsignfoldertype_pdfanoncompliantaction;
}


#ifdef field_e_ezsignfoldertype_pdfanoncompliantaction_MAIN

void test_field_e_ezsignfoldertype_pdfanoncompliantaction(int include_optional) {
    field_e_ezsignfoldertype_pdfanoncompliantaction_t* field_e_ezsignfoldertype_pdfanoncompliantaction_1 = instantiate_field_e_ezsignfoldertype_pdfanoncompliantaction(include_optional);

	cJSON* jsonfield_e_ezsignfoldertype_pdfanoncompliantaction_1 = field_e_ezsignfoldertype_pdfanoncompliantaction_convertToJSON(field_e_ezsignfoldertype_pdfanoncompliantaction_1);
	printf("field_e_ezsignfoldertype_pdfanoncompliantaction :\n%s\n", cJSON_Print(jsonfield_e_ezsignfoldertype_pdfanoncompliantaction_1));
	field_e_ezsignfoldertype_pdfanoncompliantaction_t* field_e_ezsignfoldertype_pdfanoncompliantaction_2 = field_e_ezsignfoldertype_pdfanoncompliantaction_parseFromJSON(jsonfield_e_ezsignfoldertype_pdfanoncompliantaction_1);
	cJSON* jsonfield_e_ezsignfoldertype_pdfanoncompliantaction_2 = field_e_ezsignfoldertype_pdfanoncompliantaction_convertToJSON(field_e_ezsignfoldertype_pdfanoncompliantaction_2);
	printf("repeating field_e_ezsignfoldertype_pdfanoncompliantaction:\n%s\n", cJSON_Print(jsonfield_e_ezsignfoldertype_pdfanoncompliantaction_2));
}

int main() {
  test_field_e_ezsignfoldertype_pdfanoncompliantaction(1);
  test_field_e_ezsignfoldertype_pdfanoncompliantaction(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsignfoldertype_pdfanoncompliantaction_MAIN
#endif // field_e_ezsignfoldertype_pdfanoncompliantaction_TEST
