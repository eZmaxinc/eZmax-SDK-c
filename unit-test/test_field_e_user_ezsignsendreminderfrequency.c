#ifndef field_e_user_ezsignsendreminderfrequency_TEST
#define field_e_user_ezsignsendreminderfrequency_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_user_ezsignsendreminderfrequency_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_user_ezsignsendreminderfrequency.h"
field_e_user_ezsignsendreminderfrequency_t* instantiate_field_e_user_ezsignsendreminderfrequency(int include_optional);



field_e_user_ezsignsendreminderfrequency_t* instantiate_field_e_user_ezsignsendreminderfrequency(int include_optional) {
  field_e_user_ezsignsendreminderfrequency_t* field_e_user_ezsignsendreminderfrequency = NULL;
  if (include_optional) {
    field_e_user_ezsignsendreminderfrequency = field_e_user_ezsignsendreminderfrequency_create(
    );
  } else {
    field_e_user_ezsignsendreminderfrequency = field_e_user_ezsignsendreminderfrequency_create(
    );
  }

  return field_e_user_ezsignsendreminderfrequency;
}


#ifdef field_e_user_ezsignsendreminderfrequency_MAIN

void test_field_e_user_ezsignsendreminderfrequency(int include_optional) {
    field_e_user_ezsignsendreminderfrequency_t* field_e_user_ezsignsendreminderfrequency_1 = instantiate_field_e_user_ezsignsendreminderfrequency(include_optional);

	cJSON* jsonfield_e_user_ezsignsendreminderfrequency_1 = field_e_user_ezsignsendreminderfrequency_convertToJSON(field_e_user_ezsignsendreminderfrequency_1);
	printf("field_e_user_ezsignsendreminderfrequency :\n%s\n", cJSON_Print(jsonfield_e_user_ezsignsendreminderfrequency_1));
	field_e_user_ezsignsendreminderfrequency_t* field_e_user_ezsignsendreminderfrequency_2 = field_e_user_ezsignsendreminderfrequency_parseFromJSON(jsonfield_e_user_ezsignsendreminderfrequency_1);
	cJSON* jsonfield_e_user_ezsignsendreminderfrequency_2 = field_e_user_ezsignsendreminderfrequency_convertToJSON(field_e_user_ezsignsendreminderfrequency_2);
	printf("repeating field_e_user_ezsignsendreminderfrequency:\n%s\n", cJSON_Print(jsonfield_e_user_ezsignsendreminderfrequency_2));
}

int main() {
  test_field_e_user_ezsignsendreminderfrequency(1);
  test_field_e_user_ezsignsendreminderfrequency(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_user_ezsignsendreminderfrequency_MAIN
#endif // field_e_user_ezsignsendreminderfrequency_TEST
