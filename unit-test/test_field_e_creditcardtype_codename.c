#ifndef field_e_creditcardtype_codename_TEST
#define field_e_creditcardtype_codename_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_creditcardtype_codename_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_creditcardtype_codename.h"
field_e_creditcardtype_codename_t* instantiate_field_e_creditcardtype_codename(int include_optional);



field_e_creditcardtype_codename_t* instantiate_field_e_creditcardtype_codename(int include_optional) {
  field_e_creditcardtype_codename_t* field_e_creditcardtype_codename = NULL;
  if (include_optional) {
    field_e_creditcardtype_codename = field_e_creditcardtype_codename_create(
    );
  } else {
    field_e_creditcardtype_codename = field_e_creditcardtype_codename_create(
    );
  }

  return field_e_creditcardtype_codename;
}


#ifdef field_e_creditcardtype_codename_MAIN

void test_field_e_creditcardtype_codename(int include_optional) {
    field_e_creditcardtype_codename_t* field_e_creditcardtype_codename_1 = instantiate_field_e_creditcardtype_codename(include_optional);

	cJSON* jsonfield_e_creditcardtype_codename_1 = field_e_creditcardtype_codename_convertToJSON(field_e_creditcardtype_codename_1);
	printf("field_e_creditcardtype_codename :\n%s\n", cJSON_Print(jsonfield_e_creditcardtype_codename_1));
	field_e_creditcardtype_codename_t* field_e_creditcardtype_codename_2 = field_e_creditcardtype_codename_parseFromJSON(jsonfield_e_creditcardtype_codename_1);
	cJSON* jsonfield_e_creditcardtype_codename_2 = field_e_creditcardtype_codename_convertToJSON(field_e_creditcardtype_codename_2);
	printf("repeating field_e_creditcardtype_codename:\n%s\n", cJSON_Print(jsonfield_e_creditcardtype_codename_2));
}

int main() {
  test_field_e_creditcardtype_codename(1);
  test_field_e_creditcardtype_codename(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_creditcardtype_codename_MAIN
#endif // field_e_creditcardtype_codename_TEST
