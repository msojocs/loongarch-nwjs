      return arm->sp;
    case kCPUArchitectureARM64:
      return arm64->sp;
    default:
      NOTREACHED();
      return ~0ull;

//----replace
      return arm->sp;
    case kCPUArchitectureARM64:
      return arm64->sp;
    case kCPUArchitectureLOONGARCH64:// loongarch64
      return loongarch64->regs[3];// loongarch64
    default:
      NOTREACHED();
      return ~0ull;
