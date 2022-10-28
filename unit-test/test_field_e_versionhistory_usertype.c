#ifndef field_e_versionhistory_usertype_TEST
#define field_e_versionhistory_usertype_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_versionhistory_usertype_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_versionhistory_usertype.h"
field_e_versionhistory_usertype_t* instantiate_field_e_versionhistory_usertype(int include_optional);



field_e_versionhistory_usertype_t* instantiate_field_e_versionhistory_usertype(int include_optional) {
  field_e_versionhistory_usertype_t* field_e_versionhistory_usertype = NULL;
  if (include_optional) {
    field_e_versionhistory_usertype = field_e_versionhistory_usertype_create(
    );
  } else {
    field_e_versionhistory_usertype = field_e_versionhistory_usertype_create(
    );
  }

  return field_e_versionhistory_usertype;
}


#ifdef field_e_versionhistory_usertype_MAIN

void test_field_e_versionhistory_usertype(int include_optional) {
    field_e_versionhistory_usertype_t* field_e_versionhistory_usertype_1 = instantiate_field_e_versionhistory_usertype(include_optional);

	cJSON* jsonfield_e_versionhistory_usertype_1 = field_e_versionhistory_usertype_convertToJSON(field_e_versionhistory_usertype_1);
	printf("field_e_versionhistory_usertype :\n%s\n", cJSON_Print(jsonfield_e_versionhistory_usertype_1));
	field_e_versionhistory_usertype_t* field_e_versionhistory_usertype_2 = field_e_versionhistory_usertype_parseFromJSON(jsonfield_e_versionhistory_usertype_1);
	cJSON* jsonfield_e_versionhistory_usertype_2 = field_e_versionhistory_usertype_convertToJSON(field_e_versionhistory_usertype_2);
	printf("repeating field_e_versionhistory_usertype:\n%s\n", cJSON_Print(jsonfield_e_versionhistory_usertype_2));
}

int main() {
  test_field_e_versionhistory_usertype(1);
  test_field_e_versionhistory_usertype(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_versionhistory_usertype_MAIN
#endif // field_e_versionhistory_usertype_TEST
