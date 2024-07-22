using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReslverConfig
{
    public static string ListSplitSymbol = ",";

    private static int m_IntLength = int.MaxValue.ToString().Length;
    public static int IntLength => m_IntLength + 1;
    public static byte LengthLength => 2;
}