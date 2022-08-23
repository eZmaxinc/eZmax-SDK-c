#ifndef field_e_ezsignfoldertype_sendreminderfrequency_TEST
#define field_e_ezsignfoldertype_sendreminderfrequency_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsignfoldertype_sendreminderfrequency_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsignfoldertype_sendreminderfrequency.h"
field_e_ezsignfoldertype_sendreminderfrequency_t* instantiate_field_e_ezsignfoldertype_sendreminderfrequency(int include_optional);



field_e_ezsignfoldertype_sendreminderfrequency_t* instantiate_field_e_ezsignfoldertype_sendreminderfrequency(int include_optional) {
  field_e_ezsignfoldertype_sendreminderfrequency_t* field_e_ezsignfoldertype_sendreminderfrequency = NULL;
  if (include_optional) {
    field_e_ezsignfoldertype_sendreminderfrequency = field_e_ezsignfoldertype_sendreminderfrequency_create(
    );
  } else {
    field_e_ezsignfoldertype_sendreminderfrequency = field_e_ezsignfoldertype_sendreminderfrequency_create(
    );
  }

  return field_e_ezsignfoldertype_sendreminderfrequency;
}


#ifdef field_e_ezsignfoldertype_sendreminderfrequency_MAIN

void test_field_e_ezsignfoldertype_sendreminderfrequency(int include_optional) {
    field_e_ezsignfoldertype_sendreminderfrequency_t* field_e_ezsignfoldertype_sendreminderfrequency_1 = instantiate_field_e_ezsignfoldertype_sendreminderfrequency(include_optional);

	cJSON* jsonfield_e_ezsignfoldertype_sendreminderfrequency_1 = field_e_ezsignfoldertype_sendreminderfrequency_convertToJSON(field_e_ezsignfoldertype_sendreminderfrequency_1);
	printf("field_e_ezsignfoldertype_sendreminderfrequency :\n%s\n", cJSON_Print(jsonfield_e_ezsignfoldertype_sendreminderfrequency_1));
	field_e_ezsignfoldertype_sendreminderfrequency_t* field_e_ezsignfoldertype_sendreminderfrequency_2 = field_e_ezsignfoldertype_sendreminderfrequency_parseFromJSON(jsonfield_e_ezsignfoldertype_sendreminderfrequency_1);
	cJSON* jsonfield_e_ezsignfoldertype_sendreminderfrequency_2 = field_e_ezsignfoldertype_sendreminderfrequency_convertToJSON(field_e_ezsignfoldertype_sendreminderfrequency_2);
	printf("repeating field_e_ezsignfoldertype_sendreminderfrequency:\n%s\n", cJSON_Print(jsonfield_e_ezsignfoldertype_sendreminderfrequency_2));
}

int main() {
  test_field_e_ezsignfoldertype_sendreminderfrequency(1);
  test_field_e_ezsignfoldertype_sendreminderfrequency(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsignfoldertype_sendreminderfrequency_MAIN
#endif // field_e_ezsignfoldertype_sendreminderfrequency_TEST
