/*
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * common.h
 *  Created on: 03 Jan 2019
 *      Author: Brandon
 */
#pragma once
#ifndef INCLUDE_COMMON_H_
#define INCLUDE_COMMON_H_

// Application exit codes
constexpr uint32_t EXIT_NORMAL = 0;
constexpr uint32_t EXIT_BAD_ARGS = 1;
constexpr uint32_t EXIT_READ_FILE_FAILED = 2;
constexpr uint32_t EXIT_BAD_SOURCE_SIGNAL = 3;

// Application constants
constexpr uint32_t SAMPLE_RATE = 44100;
constexpr uint32_t POW_2_SAMPLE_SIZE = 32768;
constexpr uint32_t BITDEPTH = 16;

#endif  // INCLUDE_COMMON_H_
