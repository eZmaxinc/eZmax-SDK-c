#ifndef field_e_ezsigntemplate_recognition_TEST
#define field_e_ezsigntemplate_recognition_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsigntemplate_recognition_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsigntemplate_recognition.h"
field_e_ezsigntemplate_recognition_t* instantiate_field_e_ezsigntemplate_recognition(int include_optional);



field_e_ezsigntemplate_recognition_t* instantiate_field_e_ezsigntemplate_recognition(int include_optional) {
  field_e_ezsigntemplate_recognition_t* field_e_ezsigntemplate_recognition = NULL;
  if (include_optional) {
    field_e_ezsigntemplate_recognition = field_e_ezsigntemplate_recognition_create(
    );
  } else {
    field_e_ezsigntemplate_recognition = field_e_ezsigntemplate_recognition_create(
    );
  }

  return field_e_ezsigntemplate_recognition;
}


#ifdef field_e_ezsigntemplate_recognition_MAIN

void test_field_e_ezsigntemplate_recognition(int include_optional) {
    field_e_ezsigntemplate_recognition_t* field_e_ezsigntemplate_recognition_1 = instantiate_field_e_ezsigntemplate_recognition(include_optional);

	cJSON* jsonfield_e_ezsigntemplate_recognition_1 = field_e_ezsigntemplate_recognition_convertToJSON(field_e_ezsigntemplate_recognition_1);
	printf("field_e_ezsigntemplate_recognition :\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplate_recognition_1));
	field_e_ezsigntemplate_recognition_t* field_e_ezsigntemplate_recognition_2 = field_e_ezsigntemplate_recognition_parseFromJSON(jsonfield_e_ezsigntemplate_recognition_1);
	cJSON* jsonfield_e_ezsigntemplate_recognition_2 = field_e_ezsigntemplate_recognition_convertToJSON(field_e_ezsigntemplate_recognition_2);
	printf("repeating field_e_ezsigntemplate_recognition:\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplate_recognition_2));
}

int main() {
  test_field_e_ezsigntemplate_recognition(1);
  test_field_e_ezsigntemplate_recognition(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsigntemplate_recognition_MAIN
#endif // field_e_ezsigntemplate_recognition_TEST
