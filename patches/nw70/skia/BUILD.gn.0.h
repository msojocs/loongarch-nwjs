    # Conditional and empty body needed to avoid assert() below.
  } else if (current_cpu == "riscv64") {
    # Conditional and empty body needed to avoid assert() below.
  } else {
    assert(false, "Unknown cpu target")
  }

//----replace
    # Conditional and empty body needed to avoid assert() below.
  } else if (current_cpu == "riscv64") {
    # Conditional and empty body needed to avoid assert() below.
  } else if (current_cpu == "loong64") {# loongarch64
    # Conditional and empty body needed to avoid assert() below.# loongarch64
  } else {
    assert(false, "Unknown cpu target")
  }
