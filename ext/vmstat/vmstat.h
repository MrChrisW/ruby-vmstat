#include <ruby.h>

VALUE vmstat = Qnil;
VALUE vmstat_hardware = Qnil;
VALUE method_network(VALUE self);
VALUE method_cpu(VALUE self);
VALUE method_memory(VALUE self);
VALUE method_disk(VALUE self, VALUE path);
VALUE method_load_avg(VALUE self);
VALUE method_boot_time(VALUE self);

int system_int(const char *);
unsigned long long system_ull(const char *);

VALUE SYM_TYPE, SYM_FREE, SYM_FREE_BYTES;
VALUE SYM_IN_BYTES, SYM_IN_ERRORS, SYM_IN_DROPS, SYM_OUT_BYTES, SYM_OUT_ERRORS;
VALUE SYM_USER, SYM_SYSTEM, SYM_NICE, SYM_IDLE;
VALUE SYM_ORIGIN, SYM_MOUNT, SYM_AVAILABLE_BYTES, SYM_TOTAL_BYTES, SYM_USED_BYTES;
VALUE SYM_PAGESIZE, SYM_WIRED, SYM_ACTIVE, SYM_INACTIVE, SYM_ZERO_FILLED,
      SYM_REACTIVATED, SYM_PURGEABLE, SYM_PURGED, SYM_PAGEINS, SYM_PAGEOUTS,
      SYM_FAULTS, SYM_COW_FAULTS, SYM_LOOKUPS, SYM_HITS, SYM_WIRED_BYTES,
      SYM_ACTIVE_BYTES, SYM_INACTIVE_BYTES;
