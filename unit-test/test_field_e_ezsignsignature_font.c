#ifndef field_e_ezsignsignature_font_TEST
#define field_e_ezsignsignature_font_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsignsignature_font_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsignsignature_font.h"
field_e_ezsignsignature_font_t* instantiate_field_e_ezsignsignature_font(int include_optional);



field_e_ezsignsignature_font_t* instantiate_field_e_ezsignsignature_font(int include_optional) {
  field_e_ezsignsignature_font_t* field_e_ezsignsignature_font = NULL;
  if (include_optional) {
    field_e_ezsignsignature_font = field_e_ezsignsignature_font_create(
    );
  } else {
    field_e_ezsignsignature_font = field_e_ezsignsignature_font_create(
    );
  }

  return field_e_ezsignsignature_font;
}


#ifdef field_e_ezsignsignature_font_MAIN

void test_field_e_ezsignsignature_font(int include_optional) {
    field_e_ezsignsignature_font_t* field_e_ezsignsignature_font_1 = instantiate_field_e_ezsignsignature_font(include_optional);

	cJSON* jsonfield_e_ezsignsignature_font_1 = field_e_ezsignsignature_font_convertToJSON(field_e_ezsignsignature_font_1);
	printf("field_e_ezsignsignature_font :\n%s\n", cJSON_Print(jsonfield_e_ezsignsignature_font_1));
	field_e_ezsignsignature_font_t* field_e_ezsignsignature_font_2 = field_e_ezsignsignature_font_parseFromJSON(jsonfield_e_ezsignsignature_font_1);
	cJSON* jsonfield_e_ezsignsignature_font_2 = field_e_ezsignsignature_font_convertToJSON(field_e_ezsignsignature_font_2);
	printf("repeating field_e_ezsignsignature_font:\n%s\n", cJSON_Print(jsonfield_e_ezsignsignature_font_2));
}

int main() {
  test_field_e_ezsignsignature_font(1);
  test_field_e_ezsignsignature_font(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsignsignature_font_MAIN
#endif // field_e_ezsignsignature_font_TEST
