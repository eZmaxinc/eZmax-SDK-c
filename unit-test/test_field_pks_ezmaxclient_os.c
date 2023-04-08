#ifndef field_pks_ezmaxclient_os_TEST
#define field_pks_ezmaxclient_os_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_pks_ezmaxclient_os_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_pks_ezmaxclient_os.h"
field_pks_ezmaxclient_os_t* instantiate_field_pks_ezmaxclient_os(int include_optional);



field_pks_ezmaxclient_os_t* instantiate_field_pks_ezmaxclient_os(int include_optional) {
  field_pks_ezmaxclient_os_t* field_pks_ezmaxclient_os = NULL;
  if (include_optional) {
    field_pks_ezmaxclient_os = field_pks_ezmaxclient_os_create(
    );
  } else {
    field_pks_ezmaxclient_os = field_pks_ezmaxclient_os_create(
    );
  }

  return field_pks_ezmaxclient_os;
}


#ifdef field_pks_ezmaxclient_os_MAIN

void test_field_pks_ezmaxclient_os(int include_optional) {
    field_pks_ezmaxclient_os_t* field_pks_ezmaxclient_os_1 = instantiate_field_pks_ezmaxclient_os(include_optional);

	cJSON* jsonfield_pks_ezmaxclient_os_1 = field_pks_ezmaxclient_os_convertToJSON(field_pks_ezmaxclient_os_1);
	printf("field_pks_ezmaxclient_os :\n%s\n", cJSON_Print(jsonfield_pks_ezmaxclient_os_1));
	field_pks_ezmaxclient_os_t* field_pks_ezmaxclient_os_2 = field_pks_ezmaxclient_os_parseFromJSON(jsonfield_pks_ezmaxclient_os_1);
	cJSON* jsonfield_pks_ezmaxclient_os_2 = field_pks_ezmaxclient_os_convertToJSON(field_pks_ezmaxclient_os_2);
	printf("repeating field_pks_ezmaxclient_os:\n%s\n", cJSON_Print(jsonfield_pks_ezmaxclient_os_2));
}

int main() {
  test_field_pks_ezmaxclient_os(1);
  test_field_pks_ezmaxclient_os(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_pks_ezmaxclient_os_MAIN
#endif // field_pks_ezmaxclient_os_TEST
