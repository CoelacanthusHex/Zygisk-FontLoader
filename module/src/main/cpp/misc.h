#ifndef MISC_H
#define MISC_H

#include <string>
#include <string_view>
#include <vector>

int read_full(int fd, void *buf, size_t count);

int write_full(int fd, const void *buf, size_t count);

int read_int(int fd);

void write_int(int fd, int val);

std::vector<std::string> split(std::string_view s, std::string_view delimiter);

#endif // MISC_H
