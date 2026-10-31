DYNAMIC_MACRO_ENABLE = yes
NKRO_ENABLE = yes

# using an eager algorithm appears to have some bouncing that didn't happen
# before i changed it, so we're back to defer now.
DEBOUNCE_TYPE = sym_defer_pk
