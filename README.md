# stm32f407_syncforge_zephyr

The error `bash: west: command not found` means that the `west` tool is not installed or not available in your current environment's `PATH`.

### ✅ To fix this, follow these steps:

#### 1. **Install `west` using pip:**
```bash
pip install west
```

If you're using a virtual environment, make sure it's activated before installing.

#### 2. **Verify installation:**
```bash
west --version
```

#### 3. **Retry initializing the Zephyr workspace:**
```bash
west init -m https://github.com/zephyrproject-rtos/zephyr
```

```bash
sudo apt update
sudo apt install python3-pip -y
```
