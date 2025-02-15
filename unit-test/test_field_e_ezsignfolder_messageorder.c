#ifndef field_e_ezsignfolder_messageorder_TEST
#define field_e_ezsignfolder_messageorder_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsignfolder_messageorder_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsignfolder_messageorder.h"
field_e_ezsignfolder_messageorder_t* instantiate_field_e_ezsignfolder_messageorder(int include_optional);



field_e_ezsignfolder_messageorder_t* instantiate_field_e_ezsignfolder_messageorder(int include_optional) {
  field_e_ezsignfolder_messageorder_t* field_e_ezsignfolder_messageorder = NULL;
  if (include_optional) {
    field_e_ezsignfolder_messageorder = field_e_ezsignfolder_messageorder_create(
    );
  } else {
    field_e_ezsignfolder_messageorder = field_e_ezsignfolder_messageorder_create(
    );
  }

  return field_e_ezsignfolder_messageorder;
}


#ifdef field_e_ezsignfolder_messageorder_MAIN

void test_field_e_ezsignfolder_messageorder(int include_optional) {
    field_e_ezsignfolder_messageorder_t* field_e_ezsignfolder_messageorder_1 = instantiate_field_e_ezsignfolder_messageorder(include_optional);

	cJSON* jsonfield_e_ezsignfolder_messageorder_1 = field_e_ezsignfolder_messageorder_convertToJSON(field_e_ezsignfolder_messageorder_1);
	printf("field_e_ezsignfolder_messageorder :\n%s\n", cJSON_Print(jsonfield_e_ezsignfolder_messageorder_1));
	field_e_ezsignfolder_messageorder_t* field_e_ezsignfolder_messageorder_2 = field_e_ezsignfolder_messageorder_parseFromJSON(jsonfield_e_ezsignfolder_messageorder_1);
	cJSON* jsonfield_e_ezsignfolder_messageorder_2 = field_e_ezsignfolder_messageorder_convertToJSON(field_e_ezsignfolder_messageorder_2);
	printf("repeating field_e_ezsignfolder_messageorder:\n%s\n", cJSON_Print(jsonfield_e_ezsignfolder_messageorder_2));
}

int main() {
  test_field_e_ezsignfolder_messageorder(1);
  test_field_e_ezsignfolder_messageorder(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsignfolder_messageorder_MAIN
#endif // field_e_ezsignfolder_messageorder_TEST
