{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "name": "Convert decimal number",
      "provenance": [],
      "collapsed_sections": [],
      "authorship_tag": "ABX9TyMjYChm+2O8M40tH6I5SmEp",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/IJS1016/Algorithm/blob/master/Convert_decimal_number.py\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "MxWxKYEhXdH1",
        "colab_type": "code",
        "outputId": "697f699d-72f7-487a-ae37-1a76fa86b38a",
        "colab": {
          "base_uri": "https://localhost:8080/",
          "height": 52
        }
      },
      "source": [
        "# Code up basic 100 question\n",
        "# 1031 Convert decimal to octal\n",
        "\n",
        "value = int(input())\n",
        "print(oct(value)[2:])"
      ],
      "execution_count": 0,
      "outputs": [
        {
          "output_type": "stream",
          "text": [
            "10\n",
            "12\n"
          ],
          "name": "stdout"
        }
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "U1ITZnjSaZ0F",
        "colab_type": "code",
        "outputId": "bce068dc-f4db-4e93-9c69-02ca13d68bd0",
        "colab": {
          "base_uri": "https://localhost:8080/",
          "height": 52
        }
      },
      "source": [
        "# 1032 Convert decimal to hexadecimal\n",
        "\n",
        "value = int(input())\n",
        "print(hex(value)[2:])"
      ],
      "execution_count": 0,
      "outputs": [
        {
          "output_type": "stream",
          "text": [
            "255\n",
            "FF\n"
          ],
          "name": "stdout"
        }
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "7BIafs-OasBL",
        "colab_type": "code",
        "colab": {}
      },
      "source": [
        "# 1033 Convert decimal to Capitalize hexadecimal\n",
        "\n",
        "value = int(input())\n",
        "print(hex(value)[2:].upper())"
      ],
      "execution_count": 0,
      "outputs": []
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "pqVH-Cm3bEKz",
        "colab_type": "code",
        "outputId": "f4d86af3-ce97-4dd6-f566-571219895cff",
        "colab": {
          "base_uri": "https://localhost:8080/",
          "height": 52
        }
      },
      "source": [
        "# 1034 Convert octal to decimal\n",
        "\n",
        "value = \"0o\"+input()\n",
        "value = int(value, 8)\n",
        "print(value)"
      ],
      "execution_count": 0,
      "outputs": [
        {
          "output_type": "stream",
          "text": [
            "13\n",
            "11\n"
          ],
          "name": "stdout"
        }
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "5bG-yfrIbMpr",
        "colab_type": "code",
        "outputId": "460b1af4-d310-4b3a-dec3-529a00693d2e",
        "colab": {
          "base_uri": "https://localhost:8080/",
          "height": 52
        }
      },
      "source": [
        "# 1035 Convert hexadecimal to octal\n",
        "\n",
        "value = \"0x\"+input()\n",
        "\n",
        "value = int(value, 16) # chage to decimal\n",
        "\n",
        "print(oct(value)[2:])"
      ],
      "execution_count": 0,
      "outputs": [
        {
          "output_type": "stream",
          "text": [
            "f\n",
            "17\n"
          ],
          "name": "stdout"
        }
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "3lpCWYbHYhRz",
        "colab_type": "code",
        "colab": {
          "base_uri": "https://localhost:8080/",
          "height": 54
        },
        "outputId": "f0d44017-a796-4c2c-ee9e-194ad3b12203"
      },
      "source": [
        "# 1036 Convert alphabet to decimal\n",
        "\n",
        "value = input()\n",
        "print(ord(value))"
      ],
      "execution_count": 2,
      "outputs": [
        {
          "output_type": "stream",
          "text": [
            "A\n",
            "65\n"
          ],
          "name": "stdout"
        }
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "zb4Z6eABY_q5",
        "colab_type": "code",
        "colab": {
          "base_uri": "https://localhost:8080/",
          "height": 54
        },
        "outputId": "45a4e3a0-7571-4ee2-db7b-b6987f589f97"
      },
      "source": [
        "# 1036 Convert decimal to alphabet\n",
        "\n",
        "value = input()\n",
        "print(chr(int(value)))"
      ],
      "execution_count": 6,
      "outputs": [
        {
          "output_type": "stream",
          "text": [
            "65\n",
            "A\n"
          ],
          "name": "stdout"
        }
      ]
    }
  ]
}