#include <mruby.h>

void mrb_mruby_libip4tc_gem_init(mrb_state *mrb);
void mrb_mruby_libip6tc_gem_init(mrb_state *mrb);
void mrb_mruby_libxtables_gem_init(mrb_state *mrb);

void mrb_mruby_iptables_gem_init(mrb_state *mrb) {
  mrb_mruby_libip4tc_gem_init(mrb);
  mrb_mruby_libip6tc_gem_init(mrb);
  mrb_mruby_libxtables_gem_init(mrb);
}

void mrb_mruby_iptables_gem_final(mrb_state *mrb) {
}
